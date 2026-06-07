try:
    a,b,c=5,1,2
    def g(b):
        global c
        a=4
        b+=3
        c=5
        return a+b+c
    
    a,b,c=4,9,3
    print(g(a),a,b,c)
    
except: print('error')
