try:
    a,b,c=5,9,8
    def h(a):
        global c
        a=1
        b-=3
        c=2
        return a+b+c
    
    a,b,c=2,3,6
    print(h(a),a,b,c)
    
except: print('error')
