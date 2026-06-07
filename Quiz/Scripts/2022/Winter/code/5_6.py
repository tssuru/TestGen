try:
    a,b,c=2,9,0
    def g(b):
        a=4
        b*=1
        c=5
        return a+b+c
    
    a,b,c=7,4,8
    print(g(a),a,b,c)
    
except: print('error')
