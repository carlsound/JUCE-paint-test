/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
PaintTestAudioProcessorEditor::PaintTestAudioProcessorEditor (PaintTestAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
	//
	path_component_ = new PathComponent();
	point_component_ = new PointComponent();
	//
    setSize (600, 800);
	//
	addAndMakeVisible(*path_component_);
	addAndMakeVisible(*point_component_);
	//
	int vertical_offset = path_component_->getHeight() + 1;
	point_component_->setBounds(0, vertical_offset, point_component_->getWidth(), point_component_->getHeight());
	path_component_->setBounds(0, 0, path_component_->getWantsKeyboardFocus(), path_component_->getHeight());
}

PaintTestAudioProcessorEditor::~PaintTestAudioProcessorEditor()
{
	path_component_ = nullptr;
	point_component_ = nullptr;
}

//==============================================================================
void PaintTestAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void PaintTestAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
