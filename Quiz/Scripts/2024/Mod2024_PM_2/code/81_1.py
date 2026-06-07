try:
    a,b,c=7,1,5
    def g(a):
        global c
        a=4
        b*=3
        c=5
        return a+b+c
    
    a,b,c=0,9,8
    print(g(a),a,b,c)
    
except: print('error')
