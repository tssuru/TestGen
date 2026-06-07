try:
    a,b,c=4,5,8
    def h(a):
        global c
        a=1
        b*=2
        c=4
        return a+b+c
    
    a,b,c=2,6,1
    print(h(a),a,b,c)
    
except: print('error')
