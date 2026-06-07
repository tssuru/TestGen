try:
    a,b,c=9,5,1
    def g(a):
        global c
        a=4
        b+=5
        c=2
        return a+b+c
    
    a,b,c=8,2,0
    print(g(a),a,b,c)
    
except: print('error')
