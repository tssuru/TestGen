try:
    a,b,c=4,6,3
    def g(b):
        a=1
        b-=4
        c=5
        return a+b+c
    
    a,b,c=2,9,7
    print(g(a),a,b,c)
    
except: print('error')
