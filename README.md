# Automated-Code-Quality-Classification-with-Convolutional-Neural-Networks-and-NLP
This project aims to automatically classify code functions as being of "good" or "bad" quality using deep learning techniques of convolutional neural networks (CNNs) and natural language processing (NLP).

## Introduction
Manually reviewing code to determine quality and adherence to coding standards is a time-consuming process. This project explores if code quality can be automatically classified with machine learning algorithms to assist code reviews.

A CNN model is constructed that takes tokenized and preprocessed code as input to learn patterns distinguishing good and bad code. NLP techniques like tokenization, stopword removal, lemmatization are applied to preprocess the code into a format suitable for the CNN model.

## Dataset
The dataset used contains C++ code functions labeled as either "good" or "bad" quality, split into training and test sets stored in corresponding folders.

## Methodology
The key steps are:

Tokenize code into words

Remove stopwords and punctuation

Lemmatize words

Extract word tokens from good and bad code folders

Pad and preprocess word sequences

Construct CNN model with Embedding, Conv1D and MaxPooling layers

Train model on preprocessed code sequences and labels

Evaluate model on test set

## Results
The model achieves very high accuracy (100%) on both training and test sets, indicating it is able to learn distinguishing patterns between good and bad code from the limited dataset.

## Future Work
Expand dataset with more varied code samples

Try more advanced NLP techniques like n-grams

Incorporate code structure and complexity metrics

Experiment with other deep learning models like Transformers

Develop web service for classifying real code repositories

This is a proof-of-concept that automated code quality classification is possible with deep learning. With further refinements, it could assist code reviews at scale.
