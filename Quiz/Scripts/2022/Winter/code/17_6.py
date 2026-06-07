try:
    a,b,c=9,2,6
    def g(b):
        a=5
        b=3
        c=5
        return a+b+c
    
    a,b,c=0,9,2
    print(g(a),a,b,c)
    
except: print('error')
