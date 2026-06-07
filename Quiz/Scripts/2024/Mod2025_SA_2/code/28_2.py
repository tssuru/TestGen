try:
    a,b,c=3,5,7
    def h(a):
        global c
        a-=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=2,0,8
    print(h(a),a,b,c)
except: print('error')
