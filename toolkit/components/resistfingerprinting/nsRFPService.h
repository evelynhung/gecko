/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef __nsRFPService_h__
#define __nsRFPService_h__

#include "nsIObserver.h"

#include "nsString.h"

namespace mozilla {

class nsRFPService final : public nsIObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOBSERVER

  static nsRFPService* GetOrCreate();
  static bool IsResistFingerprintingEnabled()
  {
    return sPrivacyResistFingerprinting;
  }

private:
  nsresult Init();

  nsRFPService() {}

  ~nsRFPService() {}

  void UpdatePref();
  void StartShutdown();

  static bool sPrivacyResistFingerprinting;

  nsCString mInitialTZValue;
};

} // mozilla namespace

#endif /* __nsRFPService_h__ */
