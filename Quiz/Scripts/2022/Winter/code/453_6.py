try:
    a,b,c=9,4,0
    def g(b):
        a*=2
        b=5
        c=1
        return a+b+c
    
    a,b,c=7,6,3
    print(g(a),a,b,c)
    
except: print('error')
