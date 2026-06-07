try:
    a,b,c=5,3,0
    def g(a):
        global c
        a=3
        b*=5
        c=1
        return a+b+c
    
    a,b,c=9,7,6
    print(g(a),a,b,c)
    
except: print('error')
