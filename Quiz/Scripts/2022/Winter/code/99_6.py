try:
    a,b,c=1,8,2
    def h(a):
        a=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=9,0,7
    print(h(a),a,b,c)
    
except: print('error')
