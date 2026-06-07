try:
    a,b,c=6,0,9
    def g(b):
        a+=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=2,1,7
    print(g(a),a,b,c)
    
except: print('error')
