try:
    a,b,c=6,2,0
    def g(a):
        global c
        a=3
        b+=1
        c=5
        return a+b+c
    
    a,b,c=1,5,3
    print(g(a),a,b,c)
    
except: print('error')
