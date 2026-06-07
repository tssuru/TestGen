try:
    a,b,c=4,2,3
    def g(b):
        a=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=8,6,5
    print(g(a),a,b,c)
except: print('error')
