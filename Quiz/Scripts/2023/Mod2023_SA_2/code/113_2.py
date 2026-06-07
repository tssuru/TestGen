try:
    a,b,c=8,1,5
    def g(b):
        a-=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=7,9,4
    print(g(a),a,b,c)
    
except: print('error')
