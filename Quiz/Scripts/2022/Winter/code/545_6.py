try:
    a,b,c=6,5,1
    def g(a):
        global c
        a+=2
        b=1
        c=5
        return a+b+c
    
    a,b,c=4,9,8
    print(g(a),a,b,c)
    
except: print('error')
