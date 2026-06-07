try:
    a,b,c=0,4,9
    def g(b):
        a-=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=7,1,8
    print(g(a),a,b,c)
except: print('error')
