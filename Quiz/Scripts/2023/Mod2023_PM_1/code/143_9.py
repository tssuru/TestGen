try:
    a,b,c=5,0,4
    def h(a):
        a=1
        b*=3
        c=5
        return a+b+c
    
    a,b,c=1,8,3
    print(h(a),a,b,c)
    
except: print('error')
