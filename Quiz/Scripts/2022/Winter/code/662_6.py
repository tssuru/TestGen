try:
    a,b,c=3,7,6
    def g(a):
        a=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=8,9,0
    print(g(a),a,b,c)
    
except: print('error')
