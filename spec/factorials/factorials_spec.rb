describe Fixnum do
  describe '#factorial' do
    let(:input) { 10 }
    let(:output) { 3_628_800 }

    it 'returns factorial for integer' do
      expect(input.factorial).to eq(output)
    end
  end
end
