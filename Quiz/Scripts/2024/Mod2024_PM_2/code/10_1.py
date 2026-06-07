try:
    a,b,c=7,9,0
    def g(a):
        global c
        a=4
        b+=1
        c=3
        return a+b+c
    
    a,b,c=1,5,8
    print(g(a),a,b,c)
    
except: print('error')
