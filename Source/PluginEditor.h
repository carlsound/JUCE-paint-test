/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

#include "PathComponent.h"
#include "PointComponent.h"


//==============================================================================
/**
*/
class PaintTestAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    PaintTestAudioProcessorEditor (PaintTestAudioProcessor&);
    ~PaintTestAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    PaintTestAudioProcessor& processor;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PaintTestAudioProcessorEditor)

	//std::shared_ptr <PathComponent> path_component_;
	//std::shared_ptr <PointComponent> point_component_;
	//ScopedPointer<PathComponent> *path_component_;
	//ScopedPointer<PointComponent> *point_component_;
	PathComponent *path_component_;
	PointComponent *point_component_;
};
