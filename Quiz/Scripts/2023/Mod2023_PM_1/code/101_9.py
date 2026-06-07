try:
    a,b,c=8,3,6
    def g(b):
        a=4
        b*=1
        c=2
        return a+b+c
    
    a,b,c=4,7,2
    print(g(a),a,b,c)
    
except: print('error')
