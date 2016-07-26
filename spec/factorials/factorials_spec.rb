describe Fixnum do
  describe '#factorial' do
    let(:input) { 10 }
    let(:output) { 3_628_800 }

    it 'returns factorial' do
      expect(input.factorial).to eq(output)
    end
  end

  describe '#double_factorial' do
    context 'for even number' do
      let(:input) { 10 }
      let(:output) { 3_840 }

      it 'returns double factorial' do
        expect(input.double_factorial).to eq(output)
      end
    end

    context 'for odd number' do
      let(:input) { 11 }
      let(:output) { 10_395 }

      it 'returns double factorial' do
        expect(input.double_factorial).to eq(output)
      end
    end
  end

  describe '#superfactorial' do
    let(:input) { 5 }
    let(:output) { 34_560 }

    it 'returns double factorial' do
      expect(input.superfactorial).to eq(output)
    end
  end
end
