try:
    a,b,c=1,5,8
    def h(a):
        a-=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=0,3,9
    print(h(a),a,b,c)
    
except: print('error')
