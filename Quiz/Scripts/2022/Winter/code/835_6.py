try:
    a,b,c=6,7,0
    def g(a):
        a-=3
        b=2
        c=1
        return a+b+c
    
    a,b,c=1,6,5
    print(g(a),a,b,c)
    
except: print('error')
