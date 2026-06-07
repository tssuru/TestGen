try:
    a,b,c=5,9,1
    def g(a):
        global c
        a=2
        b=3
        c=2
        return a+b+c
    
    a,b,c=4,6,5
    print(g(a),a,b,c)
    
except: print('error')
