try:
    a,b,c=3,5,8
    def g(b):
        a+=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=6,0,9
    print(g(a),a,b,c)
    
except: print('error')
