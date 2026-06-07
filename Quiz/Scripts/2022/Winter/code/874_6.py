try:
    a,b,c=9,3,6
    def g(a):
        global c
        a=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=7,0,5
    print(g(a),a,b,c)
    
except: print('error')
