try:
    a,b,c=9,4,8
    def g(b):
        global c
        a+=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=2,6,1
    print(g(a),a,b,c)
    
except: print('error')
