try:
    a,b,c=7,5,2
    def h(a):
        global c
        a+=4
        b=1
        c=2
        return a+b+c
    
    a,b,c=0,8,5
    print(h(a),a,b,c)
    
except: print('error')
