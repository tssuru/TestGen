try:
    a,b,c=7,5,6
    def h(a):
        a-=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=0,1,8
    print(h(a),a,b,c)
    
except: print('error')
