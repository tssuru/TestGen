try:
    a,b,c=9,7,1
    def g(b):
        a=4
        b+=5
        c=2
        return a+b+c
    
    a,b,c=6,0,3
    print(g(a),a,b,c)
except: print('error')
