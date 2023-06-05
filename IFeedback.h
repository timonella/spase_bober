#pragma once


class IFeedback {
protected:
	virtual void WelcomeMessage()=0;
	virtual void ShowHelp()=0;
};