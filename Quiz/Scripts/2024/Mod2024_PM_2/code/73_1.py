try:
    a,b,c=9,3,8
    def g(b):
        global c
        a=4
        b-=2
        c=5
        return a+b+c
    
    a,b,c=5,4,0
    print(g(a),a,b,c)
    
except: print('error')
