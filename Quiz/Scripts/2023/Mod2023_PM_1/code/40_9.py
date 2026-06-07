try:
    a,b,c=7,5,1
    def g(a):
        a=2
        b-=4
        c=5
        return a+b+c
    
    a,b,c=9,6,4
    print(g(a),a,b,c)
    
except: print('error')
