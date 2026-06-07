try:
    a,b,c=9,2,8
    def g(a):
        global c
        a=1
        b*=3
        c=4
        return a+b+c
    
    a,b,c=0,7,9
    print(g(a),a,b,c)
    
except: print('error')
