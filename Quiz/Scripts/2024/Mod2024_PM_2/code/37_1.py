try:
    a,b,c=0,7,3
    def g(b):
        a=5
        b-=4
        c=1
        return a+b+c
    
    a,b,c=8,7,4
    print(g(a),a,b,c)
    
except: print('error')
