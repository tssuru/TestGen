try:
    a,b,c=3,6,1
    def g(b):
        a=4
        b*=5
        c=1
        return a+b+c
    
    a,b,c=8,2,4
    print(g(a),a,b,c)
    
except: print('error')
