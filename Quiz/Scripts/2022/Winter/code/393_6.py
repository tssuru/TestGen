try:
    a,b,c=8,3,8
    def g(b):
        global c
        a=4
        b-=5
        c=1
        return a+b+c
    
    a,b,c=1,3,9
    print(g(a),a,b,c)
    
except: print('error')
