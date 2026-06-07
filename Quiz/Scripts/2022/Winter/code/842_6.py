try:
    a,b,c=1,3,0
    def g(a):
        global c
        a+=2
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,4,6
    print(g(a),a,b,c)
    
except: print('error')
