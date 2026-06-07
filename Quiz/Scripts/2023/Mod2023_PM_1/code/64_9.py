try:
    a,b,c=8,2,5
    def g(b):
        a+=4
        b=2
        c=2
        return a+b+c
    
    a,b,c=4,1,9
    print(g(a),a,b,c)
    
except: print('error')
