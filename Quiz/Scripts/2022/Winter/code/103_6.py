try:
    a,b,c=2,5,4
    def g(a):
        a-=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=7,4,6
    print(g(a),a,b,c)
    
except: print('error')
