try:
    a,b,c=3,6,1
    def g(a):
        a=4
        b*=2
        c=1
        return a+b+c
    
    a,b,c=8,7,4
    print(g(a),a,b,c)
    
except: print('error')
