try:
    a,b,c=1,5,4
    def g(a):
        global c
        a-=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=7,3,0
    print(g(a),a,b,c)
    
except: print('error')
