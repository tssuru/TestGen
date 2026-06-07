try:
    a,b,c=7,4,6
    def g(a):
        a=1
        b+=3
        c=5
        return a+b+c
    
    a,b,c=0,2,9
    print(g(a),a,b,c)
    
except: print('error')
