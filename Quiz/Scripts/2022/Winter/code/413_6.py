try:
    a,b,c=5,8,8
    def g(a):
        global c
        a+=2
        b=5
        c=1
        return a+b+c
    
    a,b,c=7,9,3
    print(g(a),a,b,c)
    
except: print('error')
