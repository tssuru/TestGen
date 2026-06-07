try:
    a,b,c=5,6,0
    def g(a):
        a=4
        b+=3
        c=5
        return a+b+c
    
    a,b,c=4,1,2
    print(g(a),a,b,c)
    
except: print('error')
