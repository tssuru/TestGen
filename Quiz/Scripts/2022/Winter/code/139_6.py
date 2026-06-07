try:
    a,b,c=0,2,8
    def h(a):
        a=1
        b-=3
        c=1
        return a+b+c
    
    a,b,c=5,1,9
    print(h(a),a,b,c)
    
except: print('error')
