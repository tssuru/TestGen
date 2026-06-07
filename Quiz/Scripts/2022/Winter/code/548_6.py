try:
    a,b,c=8,9,2
    def g(b):
        a=5
        b+=3
        c=4
        return a+b+c
    
    a,b,c=6,3,0
    print(g(a),a,b,c)
    
except: print('error')
